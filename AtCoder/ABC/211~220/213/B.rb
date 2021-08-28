n = gets.to_i
a = gets.split.map(&:to_i).map.with_index do |ai, index|
  [index, ai]
end.sort_by do |x|
  x[1]
end.reverse
puts a[1][0]+1
