N,K = gets.split.map(&:to_i)

r = K.to_s.reverse.to_i
k = r.to_s.reverse.to_i
if K > r || K > k
  puts 0
  exit 0
end

ans = 0
m = 1
while K * m <= N do
  ans += 1
  m *= 10
end

if K == r
  m_r = 1
  while r * m_r <= N do
    ans += 1
    m_r *= 10
  end
end
puts ans
