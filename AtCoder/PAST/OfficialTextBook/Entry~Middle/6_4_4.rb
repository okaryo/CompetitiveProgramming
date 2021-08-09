n,w = gets.split.map(&:to_i)
ws = [0]
vs = [0]
n.times do
  a,b = gets.split.map(&:to_i)
  ws << a
  vs << b
end
value = Array.new(n+1) { Array.new(w+1, -100) }
value[0][0] = 0
1.upto(n) do |i|
  (w+1).times do |j|
    value[i][j] = [value[i][j], value[i-1][j]].max
    if j - ws[i] >= 0
      value[i][j] = [value[i][j], value[i-1][j - ws[i]] + vs[i]].max
    end
  end
end
puts(value[n].max)
