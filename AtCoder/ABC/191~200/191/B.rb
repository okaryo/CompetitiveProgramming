n,x = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
puts a.select {|ai| ai != x}.join(' ')
