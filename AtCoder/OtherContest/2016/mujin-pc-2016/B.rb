a,b,c = gets.split.map(&:to_i)
max_r = a + b + c
x,y,z = [a,b,c].sort
min_r = x + y < z ? z - (x + y) : 0
max_s = 1.0 * max_r * max_r * Math::PI
min_s = 1.0 * min_r * min_r * Math::PI
puts max_s - min_s
