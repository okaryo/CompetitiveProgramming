s = gets.chomp
t = gets.chomp
n = s.size
cnt = 0
n.times do |i|
  if s[i] != t[i]
    cnt += 1
  end
end
puts cnt