# script to execute a command
exec { 'kill': 
  command => 'pkill -f killmenow',
  path => ['/usr/bin', '/usr/sbin'],
}
