s = gets.chomp
t = gets.chomp

n = s.size

n.times do |i|
  tmp = s[n - i, i] + s[0, n - i]
  if tmp == t
    puts i
    exit
  end
end

puts -1
