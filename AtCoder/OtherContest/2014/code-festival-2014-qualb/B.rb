n,k = gets.split.map(&:to_i)
a = n.times.map{gets.to_i}

sum = 0
a.each_with_index do |x, i|
  sum += x
  if sum >= k
    puts i + 1
    exit
  end
end
