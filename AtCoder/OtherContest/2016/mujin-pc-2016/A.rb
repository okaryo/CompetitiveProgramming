c = gets.chomp

rights = %w(O P K L)
if rights.include?(c)
  puts 'Right'
else
  puts 'Left'
end
