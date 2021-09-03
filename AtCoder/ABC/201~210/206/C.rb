N = gets.to_i
A = gets.split.map(&:to_i)
cnt = {}
A.each do |ai|
  cnt[ai] ||= 0
  cnt[ai] += 1
end
ans = N * (N-1) / 2
cnt.each do |_, v|
  ans -= v * (v-1) / 2
end
puts(ans)
