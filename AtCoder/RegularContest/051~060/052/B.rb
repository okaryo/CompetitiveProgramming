n,q = gets.split.map(&:to_i)
xrh = n.times.map{gets.split.map(&:to_i)}

q.times do |i|
  a,b = gets.split.map(&:to_i)

  sum = 0
  xrh.each do |x, r, h|
    if a <= x && (x + h) <= b
      sum += Math::PI * r * r * h / 3
    elsif x <= a && a <= (x + h) && (x + h) <= b
      nr = 1.0 * r * (x + h - a) / h
      sum += Math::PI * nr * nr * (x + h - a) / 3
    elsif a <= x && x <= b && b <= (x + h)
      nr = 1.0 * r * (x + h - b) / h
      tmp = Math::PI * nr * nr * (x + h - b) / 3
      all = Math::PI * r * r * h / 3
      sum += (all - tmp)
    elsif x <= a && b <= (x + h)
      nr = 1.0 * r * (x + h - a) / h
      tmp = Math::PI * nr * nr * (x + h - a) / 3
      nr_2 = 1.0 * r * (x + h - b) / h
      tmp_2 = Math::PI * nr_2 * nr_2 * (x + h - b) / 3
      sum += (tmp - tmp_2)
    end
  end

  puts sum
end
