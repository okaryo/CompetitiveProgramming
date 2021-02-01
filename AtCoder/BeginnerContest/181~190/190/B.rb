n,s,d = gets.split.map(&:to_i)
n.times do |i|
  x,y = gets.split.map(&:to_i)
  if x < s && y > d
    puts 'Yes'
    exit 0
  end
end
puts 'No'
