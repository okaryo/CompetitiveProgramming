a,b,w = gets.split.map(&:to_i)
max = 1000 * w / a
min = (1.0 * 1000 * w / b).ceil
puts min > max ? 'UNSATISFIABLE' : [min, max].join(' ')
