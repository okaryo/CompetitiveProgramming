n = gets.to_i
s = n.times.map{gets.chomp}.uniq
count = {}
s.each do |string|
  string.delete!('!')
  count[string] = count[string].nil? ? 1 : count[string] + 1

  if count[string] >= 2
    puts string
    exit 0
  end
end
puts 'satisfiable'
