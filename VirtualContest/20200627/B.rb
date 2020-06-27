s = gets.chomp
n = s.size

ans = s
marks = %w[S H D C]
target_num = %w[10 J Q K A]
marks.each do |now_mark|
  discard = ''
  now_index = 0
  cnt = 0
  while now_index < n do
    mark = s[now_index]
    num = s[now_index + 1]
    if num == '1'
      num += '0'
      now_index += 1
    end
    now_index += 2

    if mark == now_mark && target_num.include?(num)
      cnt += 1
    else
      discard += mark + num
      next
    end

    if cnt == 5
      if ans.size > discard.size
        ans = discard
      end
      break
    end
  end
end

puts ans.size == 0 ? 0 : ans