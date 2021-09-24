N = gets.to_i
A = gets.split.map(&:to_i)
gcd = A.first
1.upto(N-1) do |i|
  gcd = gcd.gcd(A[i])
end
puts(gcd)
