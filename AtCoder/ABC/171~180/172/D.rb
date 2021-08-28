n = gets.to_i

ans = 0
1.upto(n) do |x|
  y = n / x
  sum = y * (y + 1) / 2
  ans += x * sum
end
puts ans
