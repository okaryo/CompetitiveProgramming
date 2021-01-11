x,y = gets.split.map(&:to_i).minmax
puts x + 3 > y ? 'Yes' : 'No'
