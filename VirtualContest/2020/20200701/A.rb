n,k = gets.split.map(&:to_i)

cnt = Array.new(k, 0)
1.upto(n) do |i|
  cnt[i % k] += 1
end

ans = 0
k.times do |i|
  a = i
  b = (k - a) % k
  c = (k - a) % k
  next unless (b + c) % k == 0
  ans += cnt[a] * cnt[b] * cnt[c]
end

puts ans
