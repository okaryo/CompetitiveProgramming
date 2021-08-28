x,k,d = gets.split.map(&:to_i)
x = x.abs
t = [k, x / d].min
k -= t
x -= t*d
puts k.even? ? x : (x - d).abs
