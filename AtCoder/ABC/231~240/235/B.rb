N = gets.to_i
H = gets.split.map(&:to_i)
ans = H.first
(N-1).times do |i|
  break if ans >= H[i+1]
  ans = H[i+1]
end
puts ans
