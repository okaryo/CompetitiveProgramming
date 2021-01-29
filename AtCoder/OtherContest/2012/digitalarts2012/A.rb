s = gets.split
n = gets.to_i
t = n.times.map{gets.chomp}
ans = s.map do |string|
  is_ng_word = false
  t.each do |ng|
    next unless string.length == ng.length

    l = string.length
    flag = true
    l.times do |i|
      unless ng[i] == '*' || string[i] == ng[i]
        flag = false
        break
      end
    end
    if flag
      is_ng_word = true
      break
    end
  end
  is_ng_word ? '*' * string.length : string
end
puts ans.join(' ')
