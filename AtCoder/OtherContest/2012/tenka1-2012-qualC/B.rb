s = gets.chomp
l = s.length

ans_discards = s
marks = %w[S H D C]
flashes = %w[10 J Q K A]

marks.each do |target_mark|
  tmp_discards = ''
  cnt = 0

  now_index = 0
  while now_index < l do
    num = ''
    if s[now_index + 1] == '1'
      num = s[now_index + 1, 2]
    else
      num = s[now_index + 1]
    end

    if s[now_index] == target_mark
      if flashes.include?(num)
        cnt += 1
      else
        tmp_discards += s[now_index] + num
      end
      break if cnt == 5
    else
      tmp_discards += s[now_index] + num
    end
    now_index += num.length + 1
  end

  if cnt == 5 && tmp_discards.length < ans_discards.length
    ans_discards = tmp_discards
  end
end

puts ans_discards.length == 0 ? 0 : ans_discards
