l = gets.to_i
ans = 1
11.times do |i|
  ans *= (l - (i+1))
  ans /= (i+1)
end
puts ans
