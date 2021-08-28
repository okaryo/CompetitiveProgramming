n = gets.to_i
xy = n.times.map{gets.split.map(&:to_i)}
n.times do |i|
  i.times do |j|
    j.times do |k|
      x1, y1 = xy[i]
      x2, y2 = xy[j]
      x3, y3 = xy[k]
      x1 -= x3
      x2 -= x3
      y1 -= y3
      y2 -= y3
      if x1 * y2 == x2 * y1
        puts 'Yes'
        exit 0
      end
    end
  end
end
puts 'No'
