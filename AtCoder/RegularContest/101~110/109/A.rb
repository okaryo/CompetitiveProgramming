a,b,x,y = gets.split.map(&:to_i)
ny = [x * 2, y].min
d = (b*2 - a*2 + 1).abs
ans = (d / 2) * ny + d % 2 * x
puts ans
