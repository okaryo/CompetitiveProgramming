N,P = gets.split.map(&:to_i)
puts(gets.split.map(&:to_i).count{|x| x < P})
