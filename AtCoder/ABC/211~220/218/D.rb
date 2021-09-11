N = gets.to_i
xy = N.times.map{gets.split.map(&:to_i)}
x_sort = xy.sort_by {|x, _| x}
