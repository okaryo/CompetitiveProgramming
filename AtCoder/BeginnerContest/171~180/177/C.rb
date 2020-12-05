_ = gets.to_i
a = gets.split.map(&:to_i)
mod = 10**9 + 7
sum = a.sum
ans = 0
a.each do |x|
  ans += (sum - x) * x
  ans %= mod
  sum -= x
end
puts ans
