def dfs(sum_v, index)
  ANS[index] = sum_v
  CHECK[index] = true
  n = G[index].size
  n.times do |i|
    unless CHECK[G[index][i]]
      dfs(sum_v + SUM[G[index][i]], G[index][i])
    end
  end
end

N,Q = gets.split.map(&:to_i)
ab = (N-1).times.map{gets.split.map(&:to_i)}
px = Q.times.map{gets.split.map(&:to_i)}

G = Array.new(N){[]}
ab.each do |a, b|
  G[a-1] << b-1
  G[b-1] << a-1
end

SUM = Array.new(N, 0)
px.each do |p, x|
  SUM[p-1] += x
end

ANS = Array.new(N, 0)
CHECK = Array.new(N, false)
dfs(SUM[0], 0)

puts ANS.join(' ')
