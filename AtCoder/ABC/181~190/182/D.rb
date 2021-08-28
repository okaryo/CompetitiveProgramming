N = gets.to_i
A = gets.split.map(&:to_i)
p = Array.new(N, 0)
N.times do |i|
  if i == 0
    p[i] = A[i]
  else
    p[i] = p[i-1] + A[i]
  end
end
q = []
N.times do |i|
  if i == 0
    q << A[i]
  else
    q << [q[i-1], p[i-1] + A[i]].max
  end
end
ans = 0
x = 0
N.times do |i|
  ans = [ans, x + q[i]].max
  x += p[i]
end
puts(ans)
