n = gets.to_i
s = n.times.map{gets.chomp}

target = 'indeednow'.chars.sort.join

yes = 'YES'
no = 'NO'

s.each do |si|
  if target == si.chars.sort.join
    puts yes
  else
    puts no
  end
end
