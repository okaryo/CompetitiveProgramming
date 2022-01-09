N = gets.to_i
XY = N.times.map{gets.split.map(&:to_i)}
ans = 0
N.times do |i|
  N.times do |j|
    next if i == j

    x1 = XY[i][0]
    y1 = XY[i][1]
    x2 = XY[j][0]
    y2 = XY[j][1]
    l = Math.sqrt((x1 - x2)**2 + (y1 - y2)**2)
    ans = [ans, l].max
  end
end
puts ans
