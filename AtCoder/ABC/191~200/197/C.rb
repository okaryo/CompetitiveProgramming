N = gets.to_i
A = gets.split.map(&:to_i)
ans = 10**100
(2**(N-1)).times do |bits|
  t_a = []
  t = 0
  (N-1).times do |i|
    t |= A[i]
    if bits[i] != 0
      t_a << t
      t = 0
    end
  end
  t |= A.last
  t_a << t
  xor = 0
  t_a.each do |ta|
    xor ^= ta
  end
  ans = [ans, xor].min
end
puts(ans)
