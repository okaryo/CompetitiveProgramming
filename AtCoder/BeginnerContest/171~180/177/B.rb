s = gets.chomp
t = gets.chomp
n = t.size
ans = t.size

(s.size - n + 1).times do |i|
  count = 0
  n.times do |j|
    if s[i + j] != t[j]
      count += 1
    end
  end
  ans = [count, ans].min
end

puts ans
