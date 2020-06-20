n, m = gets.split.map(&:to_i)
a, b, t = m.times.map{gets.split.map(&:to_i)}.transpose

dist = Array.new(n){Array.new(n, 10**9)}
n.times do |i|
  dist[i][i] = 0
end
m.times do |i|
  dist[a[i]-1][b[i]-1] = t[i]
  dist[b[i]-1][a[i]-1] = t[i]
end

# w_f
n.times do |k|
  n.times do |i|
    n.times do |j|
      dist[i][j] = [dist[i][j], dist[i][k] + dist[k][j]].min
    end
  end
end

ans = 10**9
n.times do |i|
  t_max = 0
  n.times do |j|
    next if i == j

    t_max = [dist[i][j], t_max].max
  end
  if t_max < ans
    ans = t_max
  end
end

puts ans
