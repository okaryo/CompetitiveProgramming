n = gets.to_i
w = n.times.map{gets.to_i}

pile = []
w.each do |x|
  index = -1
  diff = 10 ** 7
  pile.each_with_index do |y, i|
    if y >= x && diff > (y - x)
      diff = y - x
      index = i
    end
  end
  if index == -1
    pile << x
  else
    pile[index] = x
  end
end

puts pile.length