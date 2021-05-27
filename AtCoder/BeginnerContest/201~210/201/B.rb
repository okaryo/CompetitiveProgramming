n = gets.to_i
ar = n.times.map{gets.split}
ar = ar.sort_by { |x| x[1].to_i }
puts ar[n - 2][0]
