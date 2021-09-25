N,K = gets.split.map(&:to_i)
C = gets.split.map(&:to_i)
cnt = Hash.new
K.times do |i|
  cnt[C[i]] ||= 0
  cnt[C[i]] += 1
end
ans = cnt.size
K.upto(N-1) do |i|
  cnt[C[i]] ||= 0
  cnt[C[i]] += 1
  cnt[C[i-K]] -= 1
  if cnt[C[i-K]] == 0
    cnt.delete(C[i-K])
  end
  ans = [ans, cnt.size].max
end
puts(ans)
