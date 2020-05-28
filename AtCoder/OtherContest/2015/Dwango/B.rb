s = gets.chomp

ans = 0
s.scan(/(25)+/) do
  y = $&.length / 2
  ans += y * (y + 1) / 2
end

puts ans
