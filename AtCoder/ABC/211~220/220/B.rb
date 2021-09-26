K = gets.to_i
A,B = gets.split.map(&:to_i)
puts A.to_s.to_i(K) * B.to_s.to_i(K)
