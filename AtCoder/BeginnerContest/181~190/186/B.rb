h,w = gets.split.map(&:to_i)
a = h.times.map{gets.split.map(&:to_i)}
min_v = 100
a.each do |ai|
  min_v = [*ai, min_v].min
end
sum = 0
a.each do |ai|
  ai.each do |aj|
    sum += (aj - min_v)
  end
end
puts sum
