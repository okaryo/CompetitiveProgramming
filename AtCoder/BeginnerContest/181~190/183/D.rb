N,W = gets.split.map(&:to_i)
sum = Array.new(200010, 0)
N.times do
  s,t,p = gets.split.map(&:to_i)
  sum[s] += p
  sum[t] -= p
end
200005.times do |i|
  sum[i+1] += sum[i]
  if sum[i] > W
    puts('No')
    exit 0
  end
end
puts('Yes')
