n = gets.to_i
x,y = n.times.map{gets.split.map(&:to_i)}.transpose
sum = 0
n.times do |i|
  (i+1).upto(n-1) do |j|
    slope = 1.0 * (y[i] - y[j]) / (x[i] - x[j])
    if -1 <= slope && slope <= 1
      sum += 1
    end
  end
end
puts sum
