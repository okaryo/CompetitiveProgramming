n = gets.to_i

ans = 0
(1..(n-1)).each do |i|
  ans += (n - 1) / i
end

puts ans
