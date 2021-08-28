a,b,c = gets.split.map(&:to_i)
if a > b
  puts 'Takahashi'
elsif a < b
  puts 'Aoki'
else
  puts c == 0 ? 'Aoki' : 'Takahashi'
end
