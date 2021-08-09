n,m = gets.split.map(&:to_i)
a = n.times.map{gets.chomp}
group = Array.new(11) {[]}
n.times do |i|
  m.times do |j|
    x = if a[i][j] == 'S'
      0
    elsif a[i][j] == 'G'
      10
    else
      a[i][j].to_i
    end
    group[x] << [i, j]
  end
end
INF = 10**100
cost = Array.new(n) {Array.new(m, INF)}
si, sj = group[0][0]
cost[si][sj] = 0
1.upto(10) do |i|
  group[i].each do |xi, xj|
    group[i-1].each do |yi, yj|
      cost[xi][xj] = [cost[xi][xj], cost[yi][yj] + (xi - yi).abs + (xj - yj).abs].min
    end
  end
end
gi, gj = group[10][0]
ans = cost[gi][gj]
if ans == INF
  ans = -1
end
puts(ans)
