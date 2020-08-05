a,b = gets.split.map(&:to_i)
p = gets.split.map(&:to_i)
q = gets.split.map(&:to_i)

ar = Array.new(10){'x'}
p.each do |x|
  ar[x] = '.'
end

q.each do |x|
  ar[x] = 'o'
end

puts <<~TEXT
#{ar[7]} #{ar[8]} #{ar[9]} #{ar[0]}
 #{ar[4]} #{ar[5]} #{ar[6]}
  #{ar[2]} #{ar[3]}
   #{ar[1]}
TEXT
