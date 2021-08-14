n,m = gets.split.map(&:to_i)
s_ar = [0]
c_ar = [0]
m.times do
  s,c = gets.split
  s_val = 0
  n.times do |i|
    if s[i] == 'Y'
      s_val |= 1<<i
    end
  end
  s_ar << s_val
  c_ar << c.to_i
end

all = 1<<n
INF = 10**100
cost = Array.new(m+1) { Array.new(all, INF) }
cost[0][0] = 0
1.upto(m) do |i|
  all.times do |bits|
    cost[i][bits] = [cost[i][bits], cost[i-1][bits]].min
    cost[i][bits|s_ar[i]] = [cost[i][bits|s_ar[i]], cost[i-1][bits] + c_ar[i]].min
  end
end
ans = cost[m][all-1]
if ans == INF
  ans = -1
end
puts(ans)
