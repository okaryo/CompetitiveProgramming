n = gets.chomp

odd_sum = 0
even_sum = 0

n.chars.reverse.each_with_index do |char, index|
  if index.odd?
    odd_sum += char.to_i
  else
    even_sum += char.to_i
  end
end

puts "#{odd_sum} #{even_sum}"
