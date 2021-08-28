N,K = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)

MOD = 10**9 + 7

plus_pq = []
minus_pq = []

A.each do |a_v|
  if a_v >= 0
    plus_pq << a_v
  end
  if a_v < 0
    minus_pq << a_v
  end
end

ok = false
if plus_pq.size > 0
  if N == K
    ok = minus_pq.size.even?
  else
    ok = true
  end
else
  ok = K.even?
end

ans = 1
unless ok
  plus_pq = nil
  minus_pq = nil
  na = A.sort {|x, y| x.abs <=> y.abs}
  K.times do |i|
    ans *= na[i]
    ans %= MOD
  end
else
  plus_pq.sort!
  minus_pq.sort!.reverse!
  if K.odd?
    ans *= plus_pq.last
    ans %= MOD
    plus_pq.pop
  end
  p = []
  while plus_pq.size >= 2
    x = plus_pq.pop
    x *= plus_pq.pop
    p << x
  end
  while minus_pq.size >= 2
    x = minus_pq.pop
    x *= minus_pq.pop
    p << x
  end
  p.sort!.reverse!
  (K/2).times do |i|
    ans *= p[i]
    ans %= MOD
  end
end

puts ans
