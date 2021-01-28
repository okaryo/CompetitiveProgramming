n = gets.to_i
xy = n.times.map{gets.split.map(&:to_i)}
maxz = -10**10
minz = 10**10
maxw = -10**10
minw = 10**10
xy.each do |x, y|
  maxz = [maxz, x+y].max
  minz = [minz, x+y].min
  maxw = [maxw, x-y].max
  minw = [minw, x-y].min
end
puts [maxz-minz, maxw-minw].max
