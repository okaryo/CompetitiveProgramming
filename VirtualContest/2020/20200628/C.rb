x,y,a,b,c = gets.split.map(&:to_i)
p = gets.split.map(&:to_i)
q = gets.split.map(&:to_i)
r = gets.split.map(&:to_i)

puts (p.sort[-x, x] + q.sort[-y, y] + r).sort[-(x + y), x + y].sum