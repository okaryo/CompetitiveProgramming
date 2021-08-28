n = gets.to_i
a = gets.split.map(&:to_i)
prev_max_height = a.first
sum = 0
a.each do |ai|
  if ai < prev_max_height
    sum += (prev_max_height - ai)
  end
  prev_max_height = [prev_max_height, ai].max
end

puts sum
